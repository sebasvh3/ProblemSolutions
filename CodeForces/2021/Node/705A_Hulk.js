/*
 * Name : 705A - Hulk
 * Url  : https://codeforces.com/problemset/problem/705/A
 * Sub  : https://codeforces.com/contest/705/submission/105007507
 * Lang : node.js
 */

rl = require('readline').createInterface(process.stdin, process.stdout);

const words = ['I hate', 'I love'];
rl.on('line', input => {
    let n = parseInt(input);
    let i = -1;
    let output = '';
    while (i++ < n - 1) {
        output += words[i % 2];
        if (i < n - 1) output += ' that ';
    }
    console.log(output + ' it');
});
