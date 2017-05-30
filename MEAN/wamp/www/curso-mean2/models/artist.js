//primer modelo de la base de datos
'use strict'

var mongoose = require('mongoose'); //	acceder a la base datos
var Schema = mongoose.Schema; 		// 	definir esqumas de base datos
var ArtistSchema = Schema({       	//	Crear un esquema (es un objeto)
		name: String,
		description: String,
		image: String
});
// exportamos el objeto para usarlo fuera, nombre de la entidad y el Schema
module.exports = mongoose.model('Artist', ArtistSchema);