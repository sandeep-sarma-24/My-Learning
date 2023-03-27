let stocks = {
  Fruits : ["strawberry", "grapes", "banana"],
  liquid : ["water", "soda"],
  holder : ["cone", "cup", "stick"], 
  toppings : ["chocolate", "peanuts"]
}

async function kitchen(){

  try{
// Let's create a fake problem      
     await abc;
  }

  catch(error){
     console.log("abc does not exist", error)
  }

  finally{
     console.log("Runs code anyways")
  }
}

kitchen()  // run the code