/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSManagedObject.h> // Unknown library

@class NSDate, NSString, NSURL, NSNumber, NSData, NoteStoreObject, NoteBodyObject;

@interface NoteObject : NSManagedObject {
}
@property(retain, nonatomic) NSString *author;	// @dynamic
@property(retain, nonatomic) NoteBodyObject *body;	// @dynamic
@property(retain, nonatomic) NSNumber *containsCJK;	// @dynamic
@property(retain, nonatomic) NSString *content;	// G=0x3664d3f5; S=0x3664d3a5; 
@property(readonly, assign, nonatomic) NSString *contentAsPlainText;	// G=0x3664d43d; 
@property(retain, nonatomic) NSNumber *contentType;	// @dynamic
@property(retain, nonatomic) NSDate *creationDate;	// @dynamic
@property(retain, nonatomic) NSNumber *deletedFlag;	// @dynamic
@property(retain, nonatomic) NSString *externalContentRef;	// G=0x3664d879; S=0x3664d8c1; 
@property(retain, nonatomic) NSNumber *externalFlags;	// @dynamic
@property(retain, nonatomic) NSData *externalRepresentation;	// G=0x3664d7e1; S=0x3664d829; 
@property(retain, nonatomic) NSNumber *externalServerIntId;	// @dynamic
@property(assign, nonatomic) unsigned long long flags;	// G=0x3664d6c1; S=0x3664d679; 
@property(retain, nonatomic) NSString *guid;	// @dynamic
@property(readonly, assign, nonatomic) BOOL hasValidServerIntId;	// G=0x3664d789; 
@property(retain, nonatomic) NSNumber *integerId;	// @dynamic
@property(retain, nonatomic) NSNumber *isBookkeepingEntry;	// @dynamic
@property(readonly, assign, nonatomic) BOOL isMarkedForDeletion;	// G=0x3664d5f5; 
@property(assign, nonatomic) BOOL isPlainText;	// G=0x3664d569; S=0x3664d501; 
@property(retain, nonatomic) NSDate *modificationDate;	// @dynamic
@property(readonly, assign, nonatomic) NSURL *noteId;	// G=0x3664d631; 
@property(retain, nonatomic) NSString *serverId;	// @dynamic
@property(assign, nonatomic) long long serverIntId;	// G=0x3664d749; S=0x3664d701; 
@property(retain, nonatomic) NoteStoreObject *store;	// @dynamic
@property(retain, nonatomic) NSString *summary;	// @dynamic
@property(retain, nonatomic) NSString *title;	// @dynamic
// declared property getter: - (id)content;	// 0x3664d3f5
// declared property getter: - (id)contentAsPlainText;	// 0x3664d43d
- (id)contentAsPlainTextPreservingNewlines;	// 0x3664d485
// declared property getter: - (id)externalContentRef;	// 0x3664d879
// declared property getter: - (id)externalRepresentation;	// 0x3664d7e1
// declared property getter: - (unsigned long long)flags;	// 0x3664d6c1
// declared property getter: - (BOOL)hasValidServerIntId;	// 0x3664d789
// declared property getter: - (BOOL)isMarkedForDeletion;	// 0x3664d5f5
// declared property getter: - (BOOL)isPlainText;	// 0x3664d569
- (void)markForDeletion;	// 0x3664d5a9
// declared property getter: - (id)noteId;	// 0x3664d631
// declared property getter: - (long long)serverIntId;	// 0x3664d749
// declared property setter: - (void)setContent:(id)content;	// 0x3664d3a5
// declared property setter: - (void)setExternalContentRef:(id)ref;	// 0x3664d8c1
// declared property setter: - (void)setExternalRepresentation:(id)representation;	// 0x3664d829
// declared property setter: - (void)setFlags:(unsigned long long)flags;	// 0x3664d679
// declared property setter: - (void)setIsPlainText:(BOOL)text;	// 0x3664d501
// declared property setter: - (void)setServerIntId:(long long)anId;	// 0x3664d701
@end
