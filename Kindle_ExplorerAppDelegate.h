//
//  Kindle_ExplorerAppDelegate.h
//  Kindle Explorer
//
//  Created by Pat Maddox on 7/24/10.
//  Copyright 2010 Pat Maddox. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Kindle_ExplorerAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
