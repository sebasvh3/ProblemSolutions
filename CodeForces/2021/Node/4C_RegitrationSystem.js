/*
 * Name : 4C - Registration system
 * Url  : https://codeforces.com/problemset/problem/4/C
 * Sub  : https://codeforces.com/contest/4/submission/104725431
 * Lang : node.js
 */

let inputstring = '';
process.stdin.on("data", input => {
    inputstring += input;
});

process.stdin.on("end", () => {
    inputstring = inputstring.trim().split('\r\n');
    main();
});

function main() {
    const n = inputstring[0];
    const bd = {};
    for (let i = 1; i <= n; i++) {
        if (inputstring[i] in bd) {
            console.log(inputstring[i] + bd[inputstring[i]]++);
        } else {
            bd[inputstring[i]] = 1;
            console.log("OK");
        }
    }
}
