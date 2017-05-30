'use strict'

var mongoose = require('mongoose');
var app = require('./app'); 		// Cargamos app CENTRAL
var port = process.env.PORT || 3977; // Puerto para nuestro API, SERVIDOR

mongoose.connect('mongodb://localhost:27017/curso_mean2', (err,res)  => {
	if (err){
		throw err;
	}else{
		console.log("La conexión a la base de datos está funcionando correctamente...");
		// poner el servidor a escuchar:
		app.listen(port, function(){
			console.log("Servidor del api rest de música escuchando en http://localhost:"+port);
		});	
	}
});
