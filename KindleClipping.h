//
//  KindleClipping.h
//  Kindle Explorer
//
//  Created by Pat Maddox on 7/24/10.
//  Copyright 2010 Pat Maddox. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface KindleClipping : NSObject {
	NSString *content;
	NSString *title;
	NSString *author;
	NSDate   *addedOn;
	NSString *location;
}

@property(retain) NSString *content;
@property(retain) NSString *title;
@property(retain) NSString *author;
@property(retain) NSDate   *addedOn;
@property(retain) NSString *location;


@end
