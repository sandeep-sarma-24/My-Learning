var fs = require('fs');

var read_string = fs.readFileSync('test.txt', 'utf8');

console.log(read_string); // reads the file 

fs.writeFileSync('test2.txt',read_string);
