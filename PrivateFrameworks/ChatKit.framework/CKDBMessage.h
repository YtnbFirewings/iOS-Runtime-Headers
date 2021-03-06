/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDBMessage : NSObject {
    NSString * _address;
    NSDate * _date;
    NSString * _displayName;
    NSString * _groupID;
    NSString * _guid;
    BOOL  _hasBeenRead;
    int  _identifier;
    BOOL  _isAudioMessage;
    BOOL  _isMadrid;
    BOOL  _isOutgoing;
    BOOL  _isVisibleByDefault;
    NSString * _madridAccountGUID;
    NSString * _madridAccountLogin;
    NSAttributedString * _madridAttributedBody;
    NSString * _madridChatGUID;
    NSString * _madridChatIdentifier;
    NSString * _madridRoomname;
    NSString * _madridService;
    long long  _madridType;
    NSMutableArray * _mediaObjects;
    NSString * _plainBody;
    NSArray * _recipients;
    NSString * _subject;
    NSString * _text;
    NSString * _voicemailString;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly, copy) NSString *attachmentText;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *formattedAddress;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) BOOL hasAttachments;
@property (nonatomic, readonly) BOOL hasBeenRead;
@property (nonatomic) int identifier;
@property (nonatomic, readonly) BOOL isAudioMessage;
@property (nonatomic, readonly) BOOL isMadrid;
@property (nonatomic, readonly) BOOL isOutgoing;
@property (nonatomic, readonly) BOOL isVisibleByDefault;
@property (nonatomic, readonly) NSString *madridAccountGUID;
@property (nonatomic, readonly) NSString *madridAccountLogin;
@property (nonatomic, readonly) NSAttributedString *madridAttributedBody;
@property (nonatomic, readonly, copy) NSString *madridChatGUID;
@property (nonatomic, readonly) NSString *madridChatIdentifier;
@property (nonatomic, readonly) NSString *madridRoomname;
@property (nonatomic, readonly) NSString *madridService;
@property (nonatomic, readonly) long long madridType;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (nonatomic, readonly) NSString *plainBody;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)address;
- (id)alertImage;
- (id)attachmentText;
- (id)attachmentText:(BOOL)arg1;
- (id)date;
- (id)description;
- (id)displayName;
- (id)formattedAddress;
- (id)groupID;
- (id)guid;
- (BOOL)hasAttachments;
- (BOOL)hasBeenRead;
- (int)identifier;
- (id)initWithMadridMessageGUID:(id)arg1;
- (id)initWithRecordID:(int)arg1;
- (BOOL)isAudioMessage;
- (BOOL)isMadrid;
- (BOOL)isOutgoing;
- (BOOL)isVisibleByDefault;
- (id)madridAccountGUID;
- (id)madridAccountLogin;
- (id)madridAttributedBody;
- (id)madridChatGUID;
- (id)madridChatIdentifier;
- (id)madridRoomname;
- (id)madridService;
- (long long)madridType;
- (id)mediaObjects;
- (id)plainBody;
- (id)previewText;
- (id)recipients;
- (BOOL)senderIsVoicemail;
- (void)setIdentifier:(int)arg1;
- (id)subject;
- (id)text;
- (id)voicemailString;

@end
