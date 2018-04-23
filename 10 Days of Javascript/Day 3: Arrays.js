'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}



function getSecondLargest(nums)
{
    let maxNumber = nums[0], secondNumber = -1;
    
    for(var i = 1; i < nums.length; i++){
        if(maxNumber < nums[i]){
            secondNumber = maxNumber;
            maxNumber = nums[i];
        }
        if(nums[i] > secondNumber && nums[i] < maxNumber)
            secondNumber = nums[i];
    }
    return secondNumber;
}

function main() {
    const n = +(readLine());
    const nums = readLine().split(' ').map(Number);
    
    console.log(getSecondLargest(nums));
}
