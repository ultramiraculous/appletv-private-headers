/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"


@interface ATVDetailedMetadataControlFactory : NSObject <BRControlFactory> {
}
+ (id)factory;	// 0x330bc22d
- (void)_populateActors:(id)actors forControl:(id)control;	// 0x330bcb15
- (void)_populateDirectors:(id)directors forControl:(id)control;	// 0x330bcb89
- (void)_populateMovieDetails:(id)details forControl:(id)control isTrailer:(BOOL)trailer;	// 0x330bc665
- (void)_populateProducers:(id)producers forControl:(id)control;	// 0x330bcc15
- (id)_setupBaseDetailedMetadataControl:(id)control;	// 0x330bc3d1
- (id)_setupMusicDetailedMetadataControl:(id)control;	// 0x330bc4ed
- (void)_setupSpecificDetailedMetadataControl:(id)control forControl:(id)control2;	// 0x330bc53d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x330bc265
@end
