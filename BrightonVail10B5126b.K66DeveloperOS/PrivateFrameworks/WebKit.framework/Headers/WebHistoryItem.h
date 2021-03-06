/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
	WebHistoryItemPrivate *_private;	// 4 = 0x4
}
@property(retain) id RSSFeedReferrer;	// G=0x365e058d; S=0x365e05bd; converted property
@property(retain) id alternateTitle;	// G=0x365dfd89; S=0x365dfc45; converted property
@property(retain) id title;	// G=0x365ac68d; S=0x365a03fd; converted property
@property(assign) int visitCount;	// G=0x365e0579; S=0x365e0471; converted property
+ (void)initWindowWatcherIfNecessary;	// 0x36592189
+ (id)entryWithURL:(id)url;	// 0x365e0049
+ (void)initialize;	// 0x3658e475
- (id)init;	// 0x365df751
- (id)initFromDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x3658b719
- (id)initWithURL:(id)url target:(id)target parent:(id)parent title:(id)title;	// 0x365e008d
- (id)initWithURL:(id)url title:(id)title;	// 0x365e04dd
- (id)initWithURLString:(id)urlstring title:(id)title displayTitle:(id)title3 lastVisitedTimeInterval:(double)interval;	// 0x3658c435
- (id)initWithURLString:(id)urlstring title:(id)title lastVisitedTimeInterval:(double)interval;	// 0x3659e20d
- (id)initWithWebCoreHistoryItem:(PassRefPtr<WebCore::HistoryItem>)webCoreHistoryItem;	// 0x36589119
// converted property getter: - (id)RSSFeedReferrer;	// 0x365e058d
- (id)URL;	// 0x365e07a1
- (id)URLString;	// 0x3658c8dd
- (unsigned long)_getDailyVisitCounts:(const int **)counts;	// 0x365e0bd9
- (unsigned long)_getWeeklyVisitCounts:(const int **)counts;	// 0x365e0bf1
- (BOOL)_lastVisitWasHTTPNonGet;	// 0x365e0b11
- (id)_lastVisitedDate;	// 0x365e0915
- (void)_mergeAutoCompleteHints:(id)hints;	// 0x365e0499
- (void)_recordInitialVisit;	// 0x3659e4c1
- (id)_redirectURLs;	// 0x365e0b29
- (float)_scale;	// 0x36585139
- (BOOL)_scaleIsInitial;	// 0x3658514d
- (CGPoint)_scrollPoint;	// 0x365886a1
- (void)_setLastVisitWasFailure:(BOOL)failure;	// 0x365e0af5
- (void)_setLastVisitedTimeInterval:(double)interval;	// 0x365e08fd
- (void)_setScale:(float)scale isInitial:(BOOL)initial;	// 0x36588e51
- (void)_setScrollPoint:(CGPoint)point;	// 0x36588e1d
- (void)_setTransientProperty:(id)property forKey:(id)key;	// 0x365e0995
- (void)_setViewportArguments:(id)arguments;	// 0x3659a439
- (id)_transientPropertyForKey:(id)key;	// 0x3659b39d
- (id)_viewportArguments;	// 0x36589a9d
- (void)_visitedWithTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x365aa469
// converted property getter: - (id)alternateTitle;	// 0x365dfd89
- (id)children;	// 0x365e0701
- (id)copyWithZone:(NSZone *)zone;	// 0x365dfa21
- (void)dealloc;	// 0x3658ad49
- (id)description;	// 0x365dfe69
- (id)dictionaryRepresentation;	// 0x365e0519
- (id)dictionaryRepresentationIncludingChildren:(BOOL)children;	// 0x36589465
- (void)finalize;	// 0x365df8c9
- (unsigned)hash;	// 0x365dfdbd
- (BOOL)isEqual:(id)equal;	// 0x365dfe01
- (BOOL)isTargetItem;	// 0x365e0561
- (BOOL)lastVisitWasFailure;	// 0x365e0add
- (double)lastVisitedTimeInterval;	// 0x3658c911
- (id)originalURLString;	// 0x365dfc15
- (CGPoint)scrollPoint;	// 0x365e04b5
// converted property setter: - (void)setAlternateTitle:(id)title;	// 0x365dfc45
- (void)setAlwaysAttemptToUsePageCache:(BOOL)usePageCache;	// 0x365e079d
// converted property setter: - (void)setRSSFeedReferrer:(id)referrer;	// 0x365e05bd
// converted property setter: - (void)setTitle:(id)title;	// 0x365a03fd
- (void)setViewState:(id)state;	// 0x365e0485
// converted property setter: - (void)setVisitCount:(int)count;	// 0x365e0471
- (id)target;	// 0x365e0531
- (id)targetItem;	// 0x365e0975
// converted property getter: - (id)title;	// 0x365ac68d
// converted property getter: - (int)visitCount;	// 0x365e0579
@end

