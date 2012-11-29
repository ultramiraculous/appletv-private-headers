/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MIME-Structs.h"

@class NSMutableSet, NSMutableArray;

@interface MessageStore : NSObject <NSCopying> {
	NSMutableSet *_uniqueStrings;	// 4 = 0x4
	union {
		struct {
			NSMutableArray *_headerDataCache;
			NSMutableArray *_headerCache;
			NSMutableArray *_bodyDataCache;
			NSMutableArray *_bodyCache;
		} objectCaches;
		struct {
			CFDictionaryRef _headerDataCache;
			CFDictionaryRef _headerCache;
			CFDictionaryRef _bodyDataCache;
			CFDictionaryRef _bodyCache;
		} intKeyCaches;
	} _caches;	// 8 = 0x8
}
+ (Class)classForMimePart;	// 0x36b33995
+ (Class)headersClass;	// 0x36b33829
+ (void)setDefaultMessageHeadersClass:(Class)aClass;	// 0x36b342a1
- (id)_bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;	// 0x36b339b1
- (id)_cachedBodyDataContainerForMessage:(id)message valueIfNotPresent:(id)present;	// 0x36b34045
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x36b33f69
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;	// 0x36b33ff5
- (id)_cachedHeaderDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x36b33e5d
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;	// 0x36b3402d
- (id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available downloadIfNecessary:(BOOL)necessary partial:(BOOL *)partial;	// 0x36b3410d
- (void)_flushAllCaches;	// 0x36b340f9
- (void)_flushAllCachesLocking:(BOOL)locking;	// 0x36b3405d
- (void)_flushAllMessageData;	// 0x36b33805
- (id)_setOrGetBody:(id)body forMessage:(id)message updateFlags:(BOOL)flags;	// 0x36b33955
- (id)additionalHeadersForForwardOfMessage:(id)message;	// 0x36b342b5
- (id)additionalHeadersForReplyOfMessage:(id)message;	// 0x36b342b1
- (id)bestAlternativeForPart:(id)part;	// 0x36b33dc5
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x36b34139
- (id)bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;	// 0x36b33b05
- (id)copyWithZone:(NSZone *)zone;	// 0x36b33815
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;	// 0x36b33c2d
- (void)dealloc;	// 0x36b337a5
- (id)decryptedTopLevelPartForPart:(id)part;	// 0x36b33d45
- (id)defaultAlternativeForPart:(id)part;	// 0x36b33db5
- (id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x36b33b91
- (BOOL)hasCompleteDataForMimePart:(id)mimePart;	// 0x36b34201
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x36b33825
- (id)headersForMessage:(id)message fetchIfNotAvailable:(BOOL)available;	// 0x36b33859
- (void)setMessageClass:(Class)aClass;	// 0x36b3429d
- (void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted forMessage:(id)message;	// 0x36b34285
- (id)uniquedString:(id)string;	// 0x36b33bb5
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)mimepart;	// 0x36b34299
@end
