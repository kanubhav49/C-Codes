// console.log('Chaliye Shuru Krte h!!!');

// //Creating object
// // let rectangle = {
// //     length:1,
// //     breadth:2,

// //     //function inside object is called "METHOD"
// //     draw:function()
// //     {
// //         console.log('drawing rectangle');
// //     }
// // };

// //factory function
// function createRectangle(length,breadth){
//     return rectangle = {
        
//         // length:length,
//         // breadth:breadth,

//         // Or we can simply write
//         length,
//         breadth,
    
//         //function inside object is called "METHOD"
//         draw:function()
//         {
//             console.log('drawing rectangle');
//         }
//     };
    
// }

// //constructor function -> Pascal Notation -> first letter of every word is Capital
// //Yaha return nhi krenge jaise factory waale mei krte h
// function Rectangle(len,bre)
// {
//     this.length=len;
//     this.breadth=bre;
//     // OR
//     // this.length=1;
//     // this.breadth=2;
//     this.draw=function()
//     {
//         console.log('drawing rectangle');
//     }
// }



// let rectangleObj1=createRectangle(4,5); 

// let rectangleObject = new Rectangle(7,8) ;

// //dynamic nature of objects
// rectangleObject.color='yellow';

// delete rectangleObject.color;

//PRIMITIVE TYPE
 
// let a=10;

// let b=a;
// a++;
// console.log(a);
// console.log(b);

//REFERENCE TYPE

//EX1
// let a={value:10}; -> object is there
// let b=a;

// a.value++;
// console.log(a.value);
// console.log(b.value);

//Here we have passed a as primitive therefore is a copy not address
// let a=10;

// function inc(a)
// {
//     a++;
// }

// inc(a);
// console.log(a);

//For-in Loop

// let rectangle={
//     length:2,
//     breadth:4
// };

// for(let key in rectangle)
// {
//     console.log(key,rectangle[key]);
// }

//Hack to use for-of loop

// for(let key of Object.keys(rectangle))
// {
//     console.log(key,rectangle[key]); 
// }

// for(let key of Object.entries(rectangle))
// {
//     console.log(key,rectangle[key]); 
// }

// How to check whether if some property is present in an object or not

// let rectangle={
//     length:2,
//     breadth:4
// };

// if('color' in rectangle)
// {
//     console.log('Present');
// }
// else{
//     console.log('Not Present'); 
// }

//Strings in JavaScript

// let message = 'This is my first message';

// let words = message.split(' ');

// console.log(words); 

// let message2='This is my second \n message';

// console.log(message2);

// let people='people';

// let message = `this 
// is how ${people} can use templete
// literal`;

// console.log(message);

//Date and Time
// let date = new Date();

// console.log(date);

// let date2=new Date('June 20 1998');
// console.log(date2);

// date2.setFullYear(1999);
// console.log(date2);


// ARRAYS IMPLEMENTATION

//creation
// let numbers=[1,3,5,7];
// console.log(numbers);

// //insertion
// //1.end
// numbers.push(900);
// console.log(numbers);

// //2.begin
// numbers.unshift(128);
// console.log(numbers); 

// //3.middle
// numbers.splice(2,0,'a','b','c');
// console.log(numbers);

// //searching
// console.log(numbers.indexOf(9));

// //we want to check if a number exists in an array or not
// if(numbers.indexOf(3)!=-1)
// {
//     console.log('Present');
// }

// //better practice than above is 
// console.log(numbers.includes(7));

// let courses=[
//     {no:1, naam:'Love'},
//     {no:2, naam: 'Babbar'}
// ];

// console.log(courses);

//yeh no:1,naam:'Babbar' alg object h as compared to above one as they have different locations
// console.log(courses.indexOf({no:1,naam:'Babbar'}));

//therefore we use find method -> for objects
// let course = courses.find(function(course)
// {
//     return course.naam=='Love';
// })

// console.log(course);

// //arrow function

// let courses=[   -> Array 
//     {no:1, naam:'Love'}, -> object1
//     {no:2, naam: 'Babbar'}  -> object2
// ];

// let course=courses.find(course=>course.naam=='Hello');

// console.log(course);

//Removing Elements in Arrays

//1.End -> pop
//2.Begin -> Shift
//3.Middle -> splice

//Emptying an array
// let numbers = [1,2,3,4,5];
// let numbers2 = numbers;

// //bhot bhot bekaar method h empty krne ka 
// numbers=[];
// console.log(numbers);
// console.log(numbers2);

//Better methods
// 1.) NumberList.length=0; -> for emptying an array
// 2.) Splice method -> numbers.splice(0,numbers.length);
// 3.) while loop + pop

// combining & Slicing Arrays -> on primitives

// The slice() method returns selected elements in an array, as a new array.
// The slice() method selects from a given start, up to a (not inclusive) given end.
// The slice() method does not change the original array.

// let first=[1,2,3];
// let second=[4,5,6];

// let combined=first.concat(second);

// console.log(combined);

// let sliced = combined.slice(2,4); //-> 2->starting index 4->excluded end index iska mtlb 2nd index se 3rd index tk
// console.log(sliced);

// combining & Slicing Arrays -> on objects


//Spread Operator

// let first=[1,2,3];
// let second=[4,5,6];
// let combined=[...first,'a',...second];

// console.log(combined);

//iterating an array
// for-of loop -> only for iterables

// let arr=[10,20,30,40,50];

// for(let value of arr)
// {
//     console.log(value);
// }

// arr.forEach(function(number)
// {
//     console.log(number);
// });

//converting above to arrow function
// arr.forEach(number=>console.log(number));

//joining arrays

// let numbers=[10,20,30,40,50];
// const joined = numbers.join(',');

// console.log(joined);

//split method
// let message='This is my first message';
// let parts = message.split(' ');

// console.log(parts);

//sorting method

// let numbers=[4,3,5,7,1];
// numbers.sort();
// console.log(numbers);

//reverse function can also be used

//Filtering

// Numbers=[1,2,-1,-4];

// let filtered = Numbers.filter(function(value)
// {
//     return value>=0;
// });

// console.log(filtered);

//Mappping Arrays
// let numbers = [7,8,9,10];

// let mappeditems = numbers.map(function(value)
// {
//     return 'student_no '+  value;
// });

// console.log(mappeditems);

//Mapping with Objects
// let numbers=[-1,2,3,-4];
// let filtered = numbers.filter(value=>value>=0);

// let items = filtered.map(function(num)
// {
//     return {value:num};
// });

// console.log(items);

//chaining 
let numbers=[-1,2,3,-4];
let items = numbers.filter(value=>value>=0).map(num=>{value:num});
console.log(items);






