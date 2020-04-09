#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: Car
//  action 1: Move forwards
    car.moveForwards();
//  action 2: Uses gas
    car.consumeGas();
//  action 3: Emits fumes
    car.emitExhaustFumes();

//  2)
//  Noun: Jedi
//  action 1: Use the Force
    jedi.useTheForce();
//  action 2: Arm lightsaber
    jedi.armLightsaber();
//  action 3: Speak to Yoda
    jedi.speakToYoda();
    
//  3) 
//  Noun: Lawyer
//  action 1: Deliver Opening Argument
    lawyer.openingArgument();
//  action 2: Call out "objection"
    lawyer.objection();
//  action 3: Cross-examine witness
    laywer.crossExamine();

//  4) 
//  Noun: Dog
//  action 1: to Bark
    dog.bark();
//  action 2: Chase ball
    dog.chaseBall();
//  action 3: Wag tail
    dog.wagTail();

//  5)
//  Noun: Dentist
//  action 1: Inspect teeth
    dentist.inspectTeeth();
//  action 2: Pull tooth
    dentist.pullTooth();
//  action 3: Clean teeth
    dentist.cleanTeeth();

//  6)
//  Noun: Doctor
//  action 1: Take X-Ray
    doctor.takeXRay();
//  action 2: Perform surgery
    doctor.performSurgery();
//  action 3: Prescribe medicine
    doctor.prescribeMedicine();

//  7)
//  Noun: Monkey
//  action 1: Swing on trees
    monkey.swingOnTrees();
//  action 2: Eat banana
    monkey.eatBanana();
//  action 3: Throw poop
    monkey.throwPoop();
    
//  8)
//  Noun: Website
//  action 1: Report story
    website.reportStory();
//  action 2: Run competition
    website.runCompetition();
//  action 3: Update blog
    website.updateBlog();

//  9) 
//  Noun: Football Player
//  action 1: Workout
    footballPlayer.workout();
//  action 2: Catch Ball
    footballPlayer.catchBall();
//  action 3: Make $$$
    footballPlayer.cashPayCheque();

//  10)
//  Noun: Plant
//  action 1: Bloom
    plant.bloom();
//  action 2: Photosynthesise
    plant.photosynthesise();
//  action 3: Eat nutrients
    plant.eatNutrients();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
