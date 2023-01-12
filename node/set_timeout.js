var time = 0;

setTimeout(function(){
    time += 3;
    console.log(time + ' seconds have passed');
},3000)

console.log(__filename)