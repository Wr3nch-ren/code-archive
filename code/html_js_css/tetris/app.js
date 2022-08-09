document.addEventListener('DOMContentLoaded', () => {
    const grid = document.querySelector('.grid')
    let squares = Array.from(document.querySelectorAll('.grid div'))
    const ScoreDisplay = document.querySelector('#score')
    const StartBtn = document.querySelector('#start-button')
    const width = 10


// Tetromino
// Placement [North],[East],[South],[West]
const oTetromino = [
    [0,1,width,width+1],
    [0,1,width,width+1],
    [0,1,width,width+1],
    [0,1,width,width+1],
]

const iTetromno = [
    [width,width+1,width+2,width+3],
    [2,width+2,width*2+2,width*3,2],
    [width*2,width*2+1,width*2+2,width*2+3],
    [1,width+1,width*2+1,width*3+1]
]

const tTetromino = [
    [1,width,width+1,width+2],
    [1,width+1,width+2,width*2+1],
    [width,width+1,width+2,width*2+1],
    [1,width,width+1,width*2+1]
]

const lTetromino = [
    [2,width,width+1,width+2],
    [1,width+1,width*2+1,width*2+2],
    [width,width+1,width+2,width*2],
    [0,1,width+1,width*2+1]
]

const jTetromino = [
    [0,width,width+1,width+2],
    [1,2,width+1,width*2+1],
    [width,width+1,width+2,width*2+2],
    [1,width+1,width*2,width*2+1]
]

const sTetromino = [
    [1,2,width,width+1],
    [1,width+1,width+2,width*2+2],
    [width+1,width+2,width*2,width*2+1],
    [0,width,width+1,width*2+1]
]

const zTetromino = [
    [0,1,width+1,width+2],
    [2,width+1,width+2,width*2+1],
    [width,width+1,width*2+1,width*2+2],
    [1,width,width+1,width*2]
]

const theTetrominoes = [oTetromino,iTetromno,tTetromino,lTetromino,jTetromino,sTetromino,zTetromino]

let currentPosition = 4
let currentRotation = 0

//randomly select a Tetromino and its first rotation
let random = Math.floor(Math.random()*theTetrominoes.length)
let current = theTetrominoes[random][currentRotation]

//draw first rotation in first tetromino
function draw() {
    current.forEach(index => {
        squares[currentPosition + index].classList.add('tetromino')
    })
}

// under the Tetromino
function undraw() {
    current.forEach(index => {
        squares[currentPosition + index].classList.remove('tetromino')
    })
}

//make the tetromino move down every second
timerID = setInterval(moveDown, 1000)

function moveDown(){
    undraw()
    currentPosition += width
    draw()
    freeze()
}

function freeze(){
    if(current.some(index => squares[currentPosition + index + width].classList.contains('taken'))) {
        current.forEach(index => squares[currentPosition + index].classList.add('taken'))
        //start a new tetromino falling
        random = Math.floor(Math.random() * theTetrominoes.length)
        current = theTetrominoes[random][currentRotation]
        currentRotation = 4
        draw()
        }
    }
})