/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSConversation : NSObject {
    NSString * _conversationIdentifier;
    <MSConversationDelegate> * _delegate;
    NSUUID * _identifier;
    NSUUID * _localParticipantIdentifier;
    NSArray * _remoteParticipantIdentifiers;
    MSMessage * _selectedMessage;
}

@property (nonatomic, readonly) NSString *conversationIdentifier;
@property (nonatomic) <MSConversationDelegate> *delegate;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSUUID *localParticipantIdentifier;
@property (nonatomic, retain) NSArray *remoteParticipantIdentifiers;
@property (nonatomic, retain) MSMessage *selectedMessage;

+ (id)activeConversation;

- (void).cxx_destruct;
- (id)_initWithState:(id)arg1;
- (void)_insertAttachment:(id)arg1 adamID:(id)arg2 appName:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_updateWithState:(id)arg1;
- (id)context;
- (id)conversationIdentifier;
- (id)delegate;
- (id)identifier;
- (id)inputMessagePayload;
- (void)insertAttachment:(id)arg1 withAlternateFilename:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)insertImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertMediaAtURL:(id)arg1 attributionURL:(id)arg2 attributionIcon:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)insertMediaAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)insertRichLink:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertSticker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertStickerWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertStickerWithMediaAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)insertText:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)localParticipantIdentifier;
- (id)recipientIdentifiers;
- (id)remoteParticipantIdentifiers;
- (id)selectedMessage;
- (id)senderIdentifier;
- (id)senderIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setRemoteParticipantIdentifiers:(id)arg1;
- (void)setSelectedMessage:(id)arg1;
- (void)stageMessage:(id)arg1 localizedChangeDescription:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)unstageAllItems;
- (void)updateMessagePayload:(id)arg1 completionHandler:(id /* block */)arg2;

@end
