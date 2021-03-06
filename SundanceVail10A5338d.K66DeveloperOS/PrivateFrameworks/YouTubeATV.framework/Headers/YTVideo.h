/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YouTubeATV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSCalendarDate, NSArray, NSURL;

@interface YTVideo : NSObject {
	NSString *_id;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_author;	// 12 = 0xc
	NSCalendarDate *_dateUpdated;	// 16 = 0x10
	NSCalendarDate *_dateAdded;	// 20 = 0x14
	NSArray *_videoReferences;	// 24 = 0x18
	NSString *_notificationName;	// 28 = 0x1c
	NSString *_videoDescription;	// 32 = 0x20
	NSString *_category;	// 36 = 0x24
	NSArray *_tags;	// 40 = 0x28
	unsigned _numberOfViews;	// 44 = 0x2c
	unsigned _numLikes;	// 48 = 0x30
	unsigned _numDislikes;	// 52 = 0x34
	int _batchStatus;	// 56 = 0x38
	NSURL *_infoURL;	// 60 = 0x3c
	NSURL *_thumbnailURL;	// 64 = 0x40
	NSURL *_commentsURL;	// 68 = 0x44
	NSURL *_editURL;	// 72 = 0x48
	NSURL *_ratingsURL;	// 76 = 0x4c
	NSURL *_captionsURL;	// 80 = 0x50
	NSString *_shortID;	// 84 = 0x54
	NSString *_unplayable;	// 88 = 0x58
	BOOL _isProcessing;	// 92 = 0x5c
	NSMutableArray *_captions;	// 96 = 0x60
	int _privacy;	// 100 = 0x64
	NSString *_restrictedCountries;	// 104 = 0x68
	id _thumbnailProxyBlock;	// 108 = 0x6c
}
@property(readonly, retain) NSString *author;	// G=0x33d0aa35; converted property
@property(readonly, assign) int batchStatus;	// G=0x33d0ad39; converted property
@property(readonly, retain) NSMutableArray *captions;	// G=0x33d0b11d; converted property
@property(readonly, retain) NSURL *captionsURL;	// G=0x33d0ab09; converted property
@property(readonly, retain) NSString *category;	// G=0x33d0ab49; converted property
@property(readonly, retain) NSURL *commentsURL;	// G=0x33d0aad9; converted property
@property(readonly, retain) NSCalendarDate *dateAdded;	// G=0x33d0aa55; converted property
@property(readonly, retain) NSCalendarDate *dateUpdated;	// G=0x33d0aa45; converted property
@property(readonly, retain) NSURL *editURL;	// G=0x33d0aae9; converted property
@property(readonly, retain) NSURL *infoURL;	// G=0x33d0ab19; converted property
@property(readonly, assign) BOOL isProcessing;	// G=0x33d0b10d; converted property
@property(readonly, assign) unsigned numDislikes;	// G=0x33d0ac21; converted property
@property(readonly, assign) unsigned numLikes;	// G=0x33d0ac11; converted property
@property(readonly, assign) unsigned numberOfViews;	// G=0x33d0ad19; converted property
@property(readonly, retain) NSURL *ratingsURL;	// G=0x33d0aaf9; converted property
@property(readonly, retain) NSString *restrictedCountries;	// G=0x33d0ad29; converted property
@property(readonly, retain) NSString *shortID;	// G=0x33d0a9d1; converted property
@property(readonly, retain) NSArray *tags;	// G=0x33d0ab59; converted property
@property(readonly, retain) NSURL *thumbnailURL;	// G=0x33d0ab29; converted property
@property(readonly, retain) NSString *title;	// G=0x33d0aa05; converted property
@property(readonly, retain) NSString *unplayable;	// G=0x33d0ab91; converted property
@property(readonly, retain) NSString *videoDescription;	// G=0x33d0ab39; converted property
+ (void)disableNotifications;	// 0x33d09839
+ (void)enableNotifications;	// 0x33d0984d
+ (id)unsupportedVideoError;	// 0x33d09861
+ (id)videoIsProcessingError;	// 0x33d098f1
+ (id)videoNotFoundError;	// 0x33d098a9
- (id)initFromArchiveDictionary:(id)archiveDictionary;	// 0x33d09a31
- (id)initWithID:(id)anId title:(id)title dateUpdated:(id)updated dateAdded:(id)added videoReferences:(id)references infoURL:(id)url videoDescription:(id)description category:(id)category tags:(id)tags author:(id)author thumbnailURL:(id)url11 numLikes:(unsigned)likes numDislikes:(unsigned)dislikes numberOfViews:(unsigned)views batchStatus:(int)status commentsURL:(id)url16 editURL:(id)url17 ratingsURL:(id)url18 captionsURL:(id)url19 shortID:(id)anId20 unplayable:(id)unplayable isProcessing:(BOOL)processing privacy:(int)privacy restrictedCountries:(id)countries;	// 0x33d0a385
- (id)ID;	// 0x33d0a9c1
- (void)_postVideoDidChange;	// 0x33d0a2cd
- (void)_thumbnailDidLoad;	// 0x33d0a325
- (double)age;	// 0x33d0aba1
- (BOOL)allowsHighQuality3GPlayback;	// 0x33d0afa1
- (id)anyVideoReference;	// 0x33d0b001
- (id)archiveDictionary;	// 0x33d09e49
// converted property getter: - (id)author;	// 0x33d0aa35
// converted property getter: - (int)batchStatus;	// 0x33d0ad39
- (id)bestVideoReference;	// 0x33d0afb5
// converted property getter: - (id)captions;	// 0x33d0b11d
// converted property getter: - (id)captionsURL;	// 0x33d0ab09
- (void)carrierBundleDidChangeNotification:(id)carrierBundle;	// 0x33d0afa5
// converted property getter: - (id)category;	// 0x33d0ab49
// converted property getter: - (id)commentsURL;	// 0x33d0aad9
// converted property getter: - (id)dateAdded;	// 0x33d0aa55
- (id)dateAddedString;	// 0x33d0aa65
// converted property getter: - (id)dateUpdated;	// 0x33d0aa45
- (void)dealloc;	// 0x33d0a6d5
- (id)description;	// 0x33d0a921
// converted property getter: - (id)editURL;	// 0x33d0aae9
- (unsigned)hash;	// 0x33d099e1
// converted property getter: - (id)infoURL;	// 0x33d0ab19
- (BOOL)isBookmarked;	// 0x33d0b011
- (BOOL)isEqual:(id)equal;	// 0x33d09939
- (BOOL)isPlayable;	// 0x33d0b0c5
// converted property getter: - (BOOL)isProcessing;	// 0x33d0b10d
- (CGImageRef)largeThumbnailLoadIfAbsent:(BOOL)absent;	// 0x33d0ae01
- (void)loadThumbnailWithCallback:(id)callback;	// 0x33d0aeb1
// converted property getter: - (unsigned)numDislikes;	// 0x33d0ac21
// converted property getter: - (unsigned)numLikes;	// 0x33d0ac11
// converted property getter: - (unsigned)numberOfViews;	// 0x33d0ad19
- (BOOL)ownVideo;	// 0x33d0b195
- (CGImageRef)pluginThumbnailLoadIfAbsent:(BOOL)absent;	// 0x33d0ae59
- (BOOL)positiveRating;	// 0x33d0ac31
- (id)privacyString;	// 0x33d0b121
- (id)ratingPercentageString;	// 0x33d0ac59
// converted property getter: - (id)ratingsURL;	// 0x33d0aaf9
// converted property getter: - (id)restrictedCountries;	// 0x33d0ad29
- (CGImageRef)roundedThumbnailLoadIfAbsent:(BOOL)absent;	// 0x33d0ada5
// converted property getter: - (id)shortID;	// 0x33d0a9d1
// converted property getter: - (id)tags;	// 0x33d0ab59
- (id)tagsString;	// 0x33d0ab69
- (CGImageRef)thumbnailLoadIfAbsent:(BOOL)absent;	// 0x33d0ad49
// converted property getter: - (id)thumbnailURL;	// 0x33d0ab29
// converted property getter: - (id)title;	// 0x33d0aa05
// converted property getter: - (id)unplayable;	// 0x33d0ab91
// converted property getter: - (id)videoDescription;	// 0x33d0ab39
- (id)videoReferenceForProfile:(int)profile;	// 0x33d0af25
@end

