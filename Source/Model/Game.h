//
//  Game.h
//  Grid
//
//  Created by Timothy J. Wood on 11/25/12.
//  Copyright (c) 2012 Cocoatoa. All rights reserved.
//

#import <Foundation/NSObject.h>

@class Playfield;

@interface Game : NSObject

@property(nonatomic,readonly) Playfield *playfield;

@end