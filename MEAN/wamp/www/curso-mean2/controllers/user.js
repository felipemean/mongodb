//Controlador intermediario entre la vistay el modelo
'use strict'

//modulo bcrypt para guardar la contraseña encriptada
var bcrypt = require('bcrypt-nodejs');

var User= require('../models/user');

function pruebas(req, res){
res.status(200).send({
	message: 'Probando una accion del Controlador de usuarios del api rest con Mongo y nodeJS'
});
}
 function saveUser(req, res){
 	var user = new User();
 	// recoger los parametros que vienen por POST
 	var params = req.body;
 	console.log(params);
 	user.name = params.name;
 	user.surname = params.surname;
 	user.email = params.email;
 	user.role = 'ROLE_ADMIN';
 	user.image = 'null';
 	//guardar datos con mongoose  metodo save
	//encriptar contraseña 	
	if(params.password){
			// encriptar contraseña y guardar datos y function CALLBACK
			bcrypt.hash(params.password, null, null, function(err, hash){
					user.password = hash;
					if(user.name != null && user.surname != null && user.email != null){
						//guarde el user con metodo de mogoose .save
						user.save((err, userStored) => {
							if(err){
								res.status(500).send({message : 'Error al guardar el user'});
							}else{	
								if(!userStored){
									res.status(404).send({message : 'No se a resgistrado el user'});
								}else{
									res.status(200).send({user: userStored});
								}
							}
						});
					}else{
						res.status(200).send({message : 'Rellena todos los campos'});
					}
			});
	}else{
		res.status(200).send({message : 'Introduce la contraseña'});
	}

 }

 function loginUser(req, res){
 	var params = req.body;

 	var email = params.email;
 	var password = params.password;

 	User.findOne({email: email.toLowerCase()}, (err, user) =>{
 		if(err){
 			res.status(500).send({ messafe: "Error en la petición"});
 		}else{
 			if(!user){
 				res.status(404).send({message : 'El user no exite'});
 			}else{
 				// comprobar la contraseña
 				bcrypt.compare(password, user.password, function(err, check) {
 					if(check){
 						//devolver los datos del user logeado
 						if(params.gethash){
 							//devolver un token con jwt (datos del usuario codificado)
 						}else{
 							res.status(200).send({user});
 						}
 					}else{
 						res.status(404).send({message : 'El user no a podido logearse'});
 					}
 				});
 				
 			}
 		}
 	});

 }

module.exports = {
	pruebas,
	saveUser,
	loginUser
	
};