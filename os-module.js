const os =require('os')

const user = os.userInfo();
console.log(user)

console.log(`The System uptime is ${os.uptime()} seconds`)

console.log(os.type())
console.log(os.release())
console.log(os.freemem())
console.log(os.totalmem())