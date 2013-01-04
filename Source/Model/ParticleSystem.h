//
//  ParticleSystem.h
//  Grid
//
//  Created by Timothy J. Wood on 1/2/13.
//  Copyright (c) 2013 Cocoatoa. All rights reserved.
//

#import <Foundation/NSObject.h>

@interface ParticleSystem : NSObject

@property(nonatomic,readonly) NSPoint origin;

@property(nonatomic,readonly) uint16 count;
@property(nonatomic,readonly) SCNVector3 *points;

// TODO: Time tick that updates positions

@end