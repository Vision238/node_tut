const http = require('http')

const server = http.createServer((req,res)=>{
    if(req.url=='/'){
        res.end("This is Vision's first ever website")
    }
    res.end("This is my short history")
})

server.listen(5000)