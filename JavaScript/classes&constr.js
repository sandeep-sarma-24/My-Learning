class person{
    name; 

    constructor(name){
        this.name = name;
    }

    intro() {
        console.log(`Hi I'm ${this.name}`);
    }
}
// inheritance
class Professors extends person {

    teaches;

    constructor(name, teaches){
        super(name);
        this.teaches = teaches;
    }

    introSelf() {console.log(`My name is ${this.name}, and I will be your ${this.teaches} professor.`);
}

    grade(paper){
        const grade = Math.floor(Math.random() * (5-1) + 1);
        console.log(grade);
    }
}
//Encapsulation

class Student extends Person {

    #year;
  
    constructor(name, year) {
      super(name);
      this.#year = year;
    }
  
  
    introduceSelf() {
      console.log(`Hi! I'm ${this.name}, and I'm in year ${this.#year}.`);
    }
  
    canStudyArchery() {
      return this.#year > 1;
    }
  
}

//Private Method 

class Example {

    somePublicMethod() {
      this.#somePrivateMethod();
    }
  
    #somePrivateMethod() {
      console.log('You called me?');
    }
  
  }
  
const myExample = new Example();
  
myExample.somePublicMethod(); // 'You called me?'
  
// myExample.#somePrivateMethod(); // SyntaxError
  
