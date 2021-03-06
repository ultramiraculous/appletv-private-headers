/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "NSCopying.h"

@class WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
@private
	WebHistoryItemPrivate *_private;	// 4 = 0x4
}
@property(retain) id RSSFeedReferrer;	// G=0x3529503d; S=0x35295069; converted property
@property(retain) id alternateTitle;	// G=0x35294509; S=0x35294535; converted property
@property(retain) id title;	// G=0x35262501; S=0x35253671; converted property
@property(assign) int visitCount;	// G=0x35294f7d; S=0x35294f09; converted property
+ (void)initWindowWatcherIfNecessary;	// 0x3523db29
+ (id)entryWithURL:(id)url;	// 0x35294095
+ (void)initialize;	// 0x35239e75
- (id)init;	// 0x35294129
- (id)initFromDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x35247449
- (id)initWithURL:(id)url target:(id)target parent:(id)parent title:(id)title;	// 0x35294bc5
- (id)initWithURL:(id)url title:(id)title;	// 0x352940d5
- (id)initWithURLString:(id)urlstring title:(id)title displayTitle:(id)title3 lastVisitedTimeInterval:(double)interval;	// 0x352480a1
- (id)initWithURLString:(id)urlstring title:(id)title lastVisitedTimeInterval:(double)interval;	// 0x35294831
- (id)initWithWebCoreHistoryItem:(PassRefPtr<WebCore::HistoryItem>)webCoreHistoryItem;	// 0x35248369
// converted property getter: - (id)RSSFeedReferrer;	// 0x3529503d
- (id)URL;	// 0x3529515d
- (id)URLString;	// 0x35248829
- (unsigned long)_getDailyVisitCounts:(const int **)counts;	// 0x35294065
- (unsigned long)_getWeeklyVisitCounts:(const int **)counts;	// 0x3529407d
- (BOOL)_lastVisitWasHTTPNonGet;	// 0x35294051
- (id)_lastVisitedDate;	// 0x35294a81
- (void)_mergeAutoCompleteHints:(id)hints;	// 0x35294f31
- (void)_recordInitialVisit;	// 0x35294f69
- (id)_redirectURLs;	// 0x35294f91
- (float)_scale;	// 0x35253335
- (BOOL)_scaleIsInitial;	// 0x35262051
- (CGPoint)_scrollPoint;	// 0x35269ffd
- (void)_setLastVisitWasFailure:(BOOL)failure;	// 0x35294031
- (void)_setLastVisitedTimeInterval:(double)interval;	// 0x35295275
- (void)_setScale:(float)scale isInitial:(BOOL)initial;	// 0x3525c3d1
- (void)_setScrollPoint:(CGPoint)point;	// 0x3525c395
- (void)_setTransientProperty:(id)property forKey:(id)key;	// 0x352952ad
- (void)_setViewportArguments:(id)arguments;	// 0x35261cf1
- (id)_transientPropertyForKey:(id)key;	// 0x35258b09
- (id)_viewportArguments;	// 0x35253191
- (void)_visitedWithTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x35251995
// converted property getter: - (id)alternateTitle;	// 0x35294509
- (id)children;	// 0x35294b2d
- (id)copyWithZone:(NSZone *)zone;	// 0x35294655
- (void)dealloc;	// 0x35253c31
- (id)description;	// 0x35294271
- (id)dictionaryRepresentation;	// 0x35294115
- (id)dictionaryRepresentationIncludingChildren:(BOOL)children;	// 0x3525c691
- (void)finalize;	// 0x352947a9
- (unsigned)hash;	// 0x352944c9
- (BOOL)isEqual:(id)equal;	// 0x3529445d
- (BOOL)isTargetItem;	// 0x35294b11
- (BOOL)lastVisitWasFailure;	// 0x3529401d
- (double)lastVisitedTimeInterval;	// 0x35248855
- (id)originalURLString;	// 0x35294629
- (CGPoint)scrollPoint;	// 0x35294f45
// converted property setter: - (void)setAlternateTitle:(id)title;	// 0x35294535
- (void)setAlwaysAttemptToUsePageCache:(BOOL)usePageCache;	// 0x35294019
// converted property setter: - (void)setRSSFeedReferrer:(id)referrer;	// 0x35295069
// converted property setter: - (void)setTitle:(id)title;	// 0x35253671
- (void)setViewState:(id)state;	// 0x35294f1d
// converted property setter: - (void)setVisitCount:(int)count;	// 0x35294f09
- (id)target;	// 0x35294ae5
- (id)targetItem;	// 0x3529528d
// converted property getter: - (id)title;	// 0x35262501
// converted property getter: - (int)visitCount;	// 0x35294f7d
@end

