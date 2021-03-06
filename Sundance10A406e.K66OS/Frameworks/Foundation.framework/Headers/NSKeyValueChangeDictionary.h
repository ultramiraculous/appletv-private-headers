/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library
#import "Foundation-Structs.h"

@class NSObject, NSIndexSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueChangeDictionary : NSDictionary {
	struct {
		unsigned kind;
		NSObject *oldValue;
		NSObject *newValue;
		NSIndexSet *indexes;
		id extraData;
	} _details;	// 4 = 0x4
	NSObject *_originalObservable;	// 24 = 0x18
	BOOL _isPriorNotification;	// 28 = 0x1c
	BOOL _isRetainingObjects;	// 29 = 0x1d
}
- (id)initWithDetailsNoCopy:(XXStruct_xhVQEB)detailsNoCopy originalObservable:(id)observable isPriorNotification:(BOOL)notification;	// 0x35530581
- (unsigned)count;	// 0x355ef1fd
- (void)dealloc;	// 0x35530785
- (id)keyEnumerator;	// 0x355ef2d1
- (id)objectForKey:(id)key;	// 0x355305fd
- (void)retainObjects;	// 0x355ef18d
- (void)setDetailsNoCopy:(XXStruct_xhVQEB)copy originalObservable:(id)observable;	// 0x35535315
- (void)setOriginalObservable:(id)observable;	// 0x355ef11d
@end

