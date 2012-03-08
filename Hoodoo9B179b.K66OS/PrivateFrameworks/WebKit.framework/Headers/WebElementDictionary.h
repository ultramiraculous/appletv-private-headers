/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebElementDictionary : NSDictionary {
@private
	HitTestResult *_result;	// 4 = 0x4
	NSMutableDictionary *_cache;	// 8 = 0x8
	NSMutableSet *_nilValues;	// 12 = 0xc
	BOOL _cacheComplete;	// 16 = 0x10
}
+ (void)initialize;	// 0x34530085
+ (void)initializeLookupTable;	// 0x345301ad
- (id)initWithHitTestResult:(const HitTestResult *)hitTestResult;	// 0x34530089
- (id)_absoluteImageURL;	// 0x3454d851
- (id)_absoluteLinkURL;	// 0x3454d519
- (id)_absoluteMediaURL;	// 0x3454d761
- (id)_altDisplayString;	// 0x3454da85
- (id)_domNode;	// 0x3454dba1
- (void)_fillCache;	// 0x3454dda5
- (id)_image;	// 0x3454d941
- (id)_imageRect;	// 0x3454d125
- (id)_isContentEditable;	// 0x3454d249
- (id)_isInScrollBar;	// 0x3454d211
- (id)_isLiveLink;	// 0x3454d285
- (id)_isSelected;	// 0x3454d725
- (id)_spellingToolTip;	// 0x3454d969
- (id)_targetWebFrame;	// 0x3454d4f9
- (id)_textContent;	// 0x3454d2c1
- (id)_title;	// 0x3454d609
- (id)_titleDisplayString;	// 0x3454d3dd
- (id)_webFrame;	// 0x3454d1d9
- (unsigned)count;	// 0x3454d141
- (void)dealloc;	// 0x3453067d
- (void)finalize;	// 0x3454ddd9
- (id)keyEnumerator;	// 0x3454d18d
- (id)objectForKey:(id)key;	// 0x3454dbb5
@end
