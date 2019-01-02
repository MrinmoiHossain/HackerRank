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

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums){
    // Complete the function
    let mx = nums[0], secondmx = 0;
    for(var i = 1; i < nums.length; i++){
        if(mx < nums[i]){
            secondmx = mx;
            mx = nums[i];
        }
        if (secondmx < nums[i] && nums[i] < mx)
            secondmx = nums[i];   
    }
    return secondmx;
}


function main() {
    const n = +(readLine());
    const nums = readLine().split(' ').map(Number);
    
    console.log(getSecondLargest(nums));
}
