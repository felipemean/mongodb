//primer modelo de la base de datos
'use strict'

var mongoose = require('mongoose'); //	acceder a la base datos
var Schema = mongoose.Schema; 		// 	definir esqumas de base datos
var SongSchema = Schema({       	//	Crear un esquema (es un objeto)
		number: String,
		name: String,
		duration: String,
		file: String,
		image: String,
		//metodo populate cargar dentro de la propiedad album 
		album: { 	type: Schema.ObjectId, // Refernecia a otro objeto (Guarda un Id de otro documento
					ref: 'Album'          // Referencia de otra coleccion  (modelo)
				} 
});
// exportamos el objeto para usarlo fuera, nombre de la entidad y el Schema
module.exports = mongoose.model('Song', SongSchema);