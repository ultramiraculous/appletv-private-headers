/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSURLConnectionRequestDelegate.h"

@class NSURL, NSDate, NSDictionary, SSItemImageCollection, SSItemOffer, NSArray, SSURLConnectionRequest, NSMutableArray, NSNumber, NSString;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {
@private
	NSDate *_expirationDate;	// 4 = 0x4
	NSArray *_offers;	// 8 = 0x8
	NSDictionary *_properties;	// 12 = 0xc
	NSString *_tellAFriendBody;	// 16 = 0x10
	NSString *_tellAFriendBodyMIMEType;	// 20 = 0x14
	NSMutableArray *_tellAFriendHandlers;	// 24 = 0x18
	SSURLConnectionRequest *_tellAFriendRequest;	// 28 = 0x1c
	NSString *_tellAFriendSubject;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x304fa811; 
@property(readonly, assign, nonatomic) NSArray *allItemOffers;	// G=0x304f9f81; 
@property(readonly, assign, nonatomic) NSString *artistName;	// G=0x304f9fb9; 
@property(readonly, assign, nonatomic) float averageUserRating;	// G=0x304fa02d; 
@property(readonly, assign, nonatomic) SSItemOffer *defaultItemOffer;	// G=0x304fa08d; 
@property(readonly, assign, nonatomic) NSDate *expirationDate;	// G=0x304fc07d; @synthesize=_expirationDate
@property(readonly, assign, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;	// G=0x304fa225; 
@property(readonly, assign, nonatomic) SSItemImageCollection *imageCollection;	// G=0x304fa1a9; 
@property(readonly, assign, nonatomic) NSString *itemKind;	// G=0x304fa5e5; 
@property(readonly, assign, nonatomic) NSString *itemTitle;	// G=0x304fa7d5; 
@property(readonly, assign, nonatomic) int numberOfUserRatings;	// G=0x304faafd; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x304fa281; 
@property(readonly, retain) NSString *tellAFriendBody;	// G=0x304fad35; converted property
@property(readonly, retain) NSString *tellAFriendBodyMIMEType;	// G=0x304faded; converted property
@property(readonly, retain) NSString *tellAFriendSubject;	// G=0x304faf71; converted property
@property(readonly, assign, nonatomic) NSArray *thumbnailImages;	// G=0x304fb029; 
@property(readonly, assign, nonatomic) NSURL *viewItemURL;	// G=0x304fb099; 
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x304fb2a1
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x304fa811
- (void)_finishTellAFriendLoadWithError:(id)error;	// 0x304fbcf9
- (id)_offers;	// 0x304fbe31
- (void)_setExpirationDate:(id)date;	// 0x304fbaa1
- (id)_tellAFriendDictionary;	// 0x304fc011
// declared property getter: - (id)allItemOffers;	// 0x304f9f81
- (id)artistIdentifier;	// 0x304fb2f5
// declared property getter: - (id)artistName;	// 0x304f9fb9
// declared property getter: - (float)averageUserRating;	// 0x304fa02d
- (id)bundleIdentifier;	// 0x304fb311
- (id)bundleVersion;	// 0x304fb32d
- (id)buyParameters;	// 0x304fb0e1
- (id)collectionArtistName;	// 0x304fb349
- (id)collectionIdentifier;	// 0x304fb365
- (id)collectionIndexInCollectionGroup;	// 0x304fb381
- (id)collectionName;	// 0x304fb39d
- (id)composerName;	// 0x304fb3b9
- (id)contentRating;	// 0x304fb3d5
- (void)dealloc;	// 0x304f9e5d
// declared property getter: - (id)defaultItemOffer;	// 0x304fa08d
- (id)description;	// 0x304fb225
- (id)episodeIdentifier;	// 0x304fb471
- (id)episodeSortIdentifier;	// 0x304fb48d
// declared property getter: - (id)expirationDate;	// 0x304fc07d
- (id)genreIdentifier;	// 0x304fb4a9
- (id)genreName;	// 0x304fb4c5
// declared property getter: - (id)imageCollection;	// 0x304fa1a9
- (id)indexInCollection;	// 0x304fb4e1
- (BOOL)isCompilation;	// 0x304fb4fd
// declared property getter: - (BOOL)isGameCenterEnabled;	// 0x304fa225
// declared property getter: - (BOOL)isRestricted;	// 0x304fa281
// declared property getter: - (id)itemKind;	// 0x304fa5e5
- (id)itemOfferForIdentifier:(id)identifier;	// 0x304fa6ad
// declared property getter: - (id)itemTitle;	// 0x304fa7d5
- (void)loadTellAFriendMessageWithCompletionHandler:(id)completionHandler;	// 0x304fa859
- (id)longDescription;	// 0x304fb551
- (id)mediaKind;	// 0x304fb56d
- (id)networkName;	// 0x304fb851
- (id)numberOfCollectionsInCollectionGroup;	// 0x304fb86d
- (id)numberOfItemsInCollection;	// 0x304fb889
// declared property getter: - (int)numberOfUserRatings;	// 0x304faafd
- (id)playableMedia;	// 0x304fb109
- (id)preOrderIdentifier;	// 0x304fb9ed
- (id)priceDisplay;	// 0x304fb1fd
- (id)rawItemDictionary;	// 0x304fb8a5
- (id)relatedItemsForRelationType:(id)relationType;	// 0x304fab51
- (id)releaseDate;	// 0x304fb8dd
- (id)releaseDateString;	// 0x304fb9d1
- (void)request:(id)request didFailWithError:(id)error;	// 0x304fbb81
- (void)requestDidFinish:(id)request;	// 0x304fbbcd
- (id)seasonNumber;	// 0x304fba09
- (id)sendGiftURL;	// 0x304fba25
- (id)seriesName;	// 0x304fba85
- (id)shortDescription;	// 0x304fbae5
- (id)softwareType;	// 0x304fbb01
// converted property getter: - (id)tellAFriendBody;	// 0x304fad35
// converted property getter: - (id)tellAFriendBodyMIMEType;	// 0x304faded
- (id)tellAFriendBodyURL;	// 0x304faee5
// converted property getter: - (id)tellAFriendSubject;	// 0x304faf71
// declared property getter: - (id)thumbnailImages;	// 0x304fb029
- (void)urlConnectionRequest:(id)request didReceiveResponse:(id)response;	// 0x304fbbf9
- (id)valueForProperty:(id)property;	// 0x304fb051
- (id)videoDetails;	// 0x304fbb1d
// declared property getter: - (id)viewItemURL;	// 0x304fb099
- (id)viewReviewsURL;	// 0x304fbb39
@end

