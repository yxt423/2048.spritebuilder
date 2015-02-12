//
//  Tile.h
//  2048
//
//  Created by Xintong Yu on 2/3/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCNode.h"

@interface Tile : CCNode

@property (nonatomic, assign) NSInteger value;
@property (nonatomic, assign) BOOL mergedThisRound;

- (void)updateValueDisplay;

@end
