# [ofCourse] Lecture 1: Graphics
Examples for Lecture 1 of [ofCourse](http://www.ofcourse.io/): basic graphics, animation, mouse interaction and loops using [openFrameworks](http://openframeworks.cc/).

[ofCourse](http://www.ofcourse.io/) is a creative coding program aimed at people with no coding skills. It provides a hands-on experience, tools, ideas, and full support for students to make their own projects.

## Example 1: Shapes
 * Drawing some common shapes in oF
    * ofLine(), ofCircle(), ofRect()
    * ofBeginShape(), ofEndShape(true), ofVertex()
    
 
 * Playing with different styles and colors
    * ofBackground(), ofBackgroundHex()
    * ofFill(), ofNoFill()
    * ofSetColor(), ofSetHexColor()
    * ofColor::presets
    * ofSetLineWidth()


## Example 2: Mouse
 * Different ways of using mouse coordinates
    *. mouseX and mouseY variables
    *. passing coords from mouse event to global variables
        * mouseDragged()
        * mouseReleased()
 
 
 * Playing with ofSetBackgroundAuto();
 
 
 ## Example 3: Animation
 * Using global variables to make simple animations
 * Adding conditionals
 * Introducing app properties:
    * ofSetWindowTitle(), ofSetWindowShape()
    * ofEnableAntiAliasing(), ofSetCircleResolution()
    * ofGetWidth(), ofGetHeight()
    
    
 ## Example 4: Loop
 * Using loops and mouse coordinates to draw an interactive pattern
    a) Simple loop
    b) Nested loop
 
 
 * More color:
    * ofColor
    * setHsb()
    * ofBackgroundGradient()