import QtQuick 2.0

Rectangle {
    id: mainRectengle
    width: 480
    height: 640
    color: "white"

    Rectangle {
        id: btn1
        width: 100
        height: 100
        x: 70
        y: 120
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "1"

        }
    }

    Rectangle {
        id: btn2
        width: 100
        height: 100
        x: 190
        y: 120
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "2"

        }
    }

    Rectangle {
        id: btn3
        width: 100
        height: 100
        x: 310
        y: 120
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "3"

        }
    }

    Rectangle {
        id: btn4
        width: 100
        height: 100
        x: 70
        y: 230
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "4"

        }
    }

    Rectangle {
        id: btn5
        width: 100
        height: 100
        x: 190
        y: 230
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "5"

        }
    }

    Rectangle {
        id: btn6
        width: 100
        height: 100
        x: 310
        y: 230
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "6"

        }
    }

    Rectangle {
        id: btn7
        width: 100
        height: 100
        x: 70
        y: 340
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "7"

        }
    }

    Rectangle {
        id: btn8
        width: 100
        height: 100
        x: 190
        y: 340
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "8"

        }
    }

    Rectangle {
        id: btn9
        width: 100
        height: 100
        x: 310
        y: 340
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "9"

        }
    }

    Rectangle {
        id: star
        width: 100
        height: 100
        x: 70
        y: 450
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 25
            x: 35
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "*"

        }
    }

    Rectangle {
        id: call
        width: 100
        height: 100
        x: 190
        y: 450
        color: "lightgreen"
        radius: width*0.5
    }

    Rectangle {
        id: grid
        width: 100
        height: 100
        x: 310
        y: 450
        color: "lightgray"
        radius: width*0.5
        Text {
            y: 15
            x: 30
            font.family: "Arial"
            color: "black"
            font.pointSize: 50
            text: "#"

        }
    }
}
