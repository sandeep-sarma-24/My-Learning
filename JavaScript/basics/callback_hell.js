let stocks = {
    Fruits : ["strawberry", "grapes", "banana"],
    liquid : ["water", "soda"],
    holder : ["cone", "cup", "stick"], 
    toppings : ["chocolate", "peanuts"]
}


let order = (Fruit_name, call_production) => {
    setTimeout(() => {console.log(`${stocks.Fruits[Fruit_name]} was selected`)
    production()}
    , 2000)
    
}

// callback-hell

let production = () => {
    setTimeout(() => {console.log("production has started")
        setTimeout(() => {console.log("the fruit has been chopped")
            setTimeout(() => {console.log(`${stocks.liquid[0]} and ${stocks.liquid[1]} was added`)
                setTimeout(() => {console.log("The machine has been started")
                    setTimeout(() => {console.log(`ice cream was placed on ${stocks.holder[0]}`)
                        setTimeout(() => {console.log(`${stocks.toppings[0]} was added`)
                            setTimeout(() => {console.log("ice cream is served")
                        },1000)
                    },3000)
                },2000)
            },1000)
        },1000)
    },2000)    
},0000)
}

order(0,production)

