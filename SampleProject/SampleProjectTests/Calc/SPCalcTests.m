//
//  SPCalcTests.m
//  SampleProject
//
//  Created by 田畑浩平 on 2013/09/16.
//  Copyright (c) 2013年 Kohei Tabata. All rights reserved.
//

#import "SPCalcTests.h"

#import "SPCalc.h"

@implementation SPCalcTests

- (void)testAdd
{
    STAssertEquals([SPCalc addX:1 Y:2], 3, @"add x: y: error");
}

@end