//
//  KindleClippingsDataSource.m
//  Kindle Explorer
//
//  Created by Pat Maddox on 7/24/10.
//  Copyright 2010 Pat Maddox. All rights reserved.
//

#import "KindleClippingsController.h"
#import "KindleClipping.h"


@implementation KindleClippingsController

-(id)init
{
    if (self = [super init])
    {
		records = [[NSMutableArray alloc] init];
		NSMutableDictionary *clipping = [[NSMutableDictionary alloc] init];
		[clipping setObject: @"This is the best book ever" forKey: @"content"];
		[clipping setObject: @"Inmates are Running the Asylum" forKey: @"title"];
		[clipping setObject: @"Alan Cooper" forKey: @"author"];
		[clipping setObject: [NSDate date] forKey: @"addedOn"];
		[clipping setObject: @"123" forKey: @"location"];
		[records addObject: clipping];
    }
    return self;
}

- (NSInteger)numberOfRowsInTableView:(NSTableView *)aTableView
{
	return [records count];
}

- (id)tableView:(NSTableView *)aTableView
	objectValueForTableColumn:(NSTableColumn *)aTableColumn
	row:(NSInteger)rowIndex
{
	return [[records objectAtIndex: rowIndex] objectForKey: [aTableColumn identifier]];
}

- (void)tableViewSelectionDidChange:(NSNotification *)notification
{
	NSLog(@"check it out got here");
	NSTableView *view = [notification object];
	id record = [records objectAtIndex: [view selectedRow]];
	[contents setString: [record objectForKey: @"content"]];
}

@end

