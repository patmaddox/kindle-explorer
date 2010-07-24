//
//  KindleClippingsDataSource.h
//  Kindle Explorer
//
//  Created by Pat Maddox on 7/24/10.
//  Copyright 2010 Pat Maddox. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface KindleClippingsController : NSObject {
	NSMutableArray *records;
	IBOutlet NSTextView *contents;
}

- (NSInteger)numberOfRowsInTableView:(NSTableView *)aTableView;
- (id)tableView:(NSTableView *)aTableView
	objectValueForTableColumn:(NSTableColumn *)aTableColumn
	row:(NSInteger)rowIndex;
- (void)tableViewSelectionDidChange:(NSNotification *)aNotification;

@end
