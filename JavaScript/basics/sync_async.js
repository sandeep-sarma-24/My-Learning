console.log("sync code")

console.log(" I ");
console.log(" eat ");
console.log(" Ice Cream ");

console.log("async code")

console.log("I");
// This will be shown after 2 seconds
setTimeout(()=>{
  console.log("eat");
},2000)
console.log("Ice Cream")

