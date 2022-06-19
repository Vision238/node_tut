console.log("__filename")
console.log(process)

// now, to use the names exported in names.js, following comman is used:-
const names = require('./names.js')
console.log(names)

const sayhi = require('./utils.js')


// sayhi('Vivek')
// sayhi(names.peter)
// sayhi(names.john)


const data = require('./Alternative-flavoir.js')
console.log(data)

require('./running-whole')
