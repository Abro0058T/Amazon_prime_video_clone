  const fs= require("fs");
  let text=fs.readFile("doc.txt","utf-8",(a,b)=>{
      console.log(a,b); 
  });
  console.log("this is the me");
//   text = text.replace("text","notext");
//   console.log(text);
// console.log("creating a new file");
// fs.writeFileSync("doc2.txt",text);    