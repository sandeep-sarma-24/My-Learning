let stocks = {
    Fruits : ["strawberry", "grapes", "banana"],
    liquid : ["water", "soda"],
    holder : ["cone", "cup", "stick"], 
    toppings : ["chocolate", "peanuts"]
}

let is_shop_open = true

let order = (time, work) => {
    // PROMISE()
    return new Promise( (resolve, reject) => {
        if(is_shop_open){
            setTimeout(() => {resolve(work())}, time)
            
        }
        else{
            reject(console.log("our shop is closed"))
        }
    } )
}

order(2000, () => {console.log(`${stocks.Fruits[0]} was selected`)})

.then(() => {
    return order(0000, () => {console.log("Production has started.")})
})

.then(() => {
    return order(2000, () => {console.log("the fruit has been chopped")})
})

.then(() => {
    return order(1000, () => {console.log(`${stocks.liquid[0]} and ${stocks.liquid[1]} was added`)})
})

.then(() => {
    return order(1000, () => {console.log("The machine has been started")})
})

.then(() => {
    return order(2000, () => {console.log(`ice cream was placed on ${stocks.holder[0]}`)})
})

.then(() => {
    return order(3000, () => {console.log(`${stocks.toppings[0]} was added`)})
})

.then(() => {
    return order(1000, () => {console.log("ice cream is served")})
})

.catch(() => {
    console.log("Customer has left")
})

.finally(() => {
    console.log("The day has been ended, shop is closed")
})