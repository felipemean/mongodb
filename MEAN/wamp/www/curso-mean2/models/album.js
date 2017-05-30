//primer modelo de la base de datos
'use strict'

var mongoose = require('mongoose'); //	acceder a la base datos
var Schema = mongoose.Schema; 		// 	definir esqumas de base datos
var AlbumSchema = Schema({       	//	Crear un esquema (es un objeto)
		title: String,
		description: String,
		year: Number,
		image: String,
		artist: { 	type: Schema.ObjectId, // Refernecia a otro objeto (Guarda un Id de otro documento
					ref: 'Artist'          // Referencia de otra coleccion
				} 
});
// exportamos el objeto para usarlo fuera, nombre de la entidad y el Schema
module.exports = mongoose.model('Album', AlbumSchema);