var mongoose = require('mongoose');

var mongoDB = 'mongodb://localhost:27017/mydb';
mongoose.connect(mongoDB, {useNewUrlParser: true, useUnifiedTopology: true});

var db = mongoose.connection;

db.on('error', console.error.bind(console, 'MongoDB connection error:'));

