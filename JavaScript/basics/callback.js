// normal order 

console.log("Normal Order")

function one () { 
    console.log("step 1")
}
function two () { 
    console.log("step 2")
}

one()
two()

// reverse order 

console.log("Reverse Order")

function one () { 
    console.log("step 1")
}
function two () { 
    console.log("step 2")
}

two()
one()

// Call back 

console.log("Callback Function")

function one () { 
    two();
    console.log("step 1")
    
}
function two () { 
    console.log("step 2")
}

one(two);