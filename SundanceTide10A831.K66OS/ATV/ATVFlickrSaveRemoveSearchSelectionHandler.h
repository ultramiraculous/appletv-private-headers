/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFlickrSaveRemoveSearchSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSString *_searchTerm;	// 4 = 0x4
}
+ (id)selectionHandlerWithSearchTerm:(id)searchTerm;	// 0x1ad739
- (id)initWithSearchTerm:(id)searchTerm;	// 0x1ad775
- (void)dealloc;	// 0x1ad7a9
- (BOOL)handleSelectionForControl:(id)control;	// 0x1ad7f5
@end
