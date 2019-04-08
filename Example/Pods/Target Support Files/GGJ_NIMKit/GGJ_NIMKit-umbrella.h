#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "M80AttributedLabel+NIMKit.h"
#import "NIMExtensionHelper.h"
#import "NSDictionary+NIMKit.h"
#import "NSString+NIMKit.h"
#import "UIImage+NIMKit.h"
#import "UITableView+NIMScrollToBottom.h"
#import "UIView+NIM.h"
#import "NIMCommonTableData.h"
#import "NIMCommonTableDelegate.h"
#import "NIMCommonTableViewCell.h"
#import "NIMGlobalMacro.h"
#import "NIMKitColorButtonCell.h"
#import "NIMKitConfig.h"
#import "NIMKitDataProviderImpl.h"
#import "NIMKitDependency.h"
#import "NIMKitIndependentModeExtraInfo.h"
#import "NIMKitProgressHUD.h"
#import "NIMKitSetting.h"
#import "NIMKitSwitcherCell.h"
#import "NIMKit.h"
#import "NIMCellConfig.h"
#import "NIMInputProtocol.h"
#import "NIMKitDataProvider.h"
#import "NIMKitMessageProvider.h"
#import "NIMMessageCellProtocol.h"
#import "NIMSessionConfig.h"
#import "NIMAvatarImageView.h"
#import "NIMBadgeView.h"
#import "NIMCustomLeftBarView.h"
#import "NIMKitKeyboardInfo.h"
#import "NIMKitMediaFetcher.h"
#import "NIMKitNotificationFirer.h"
#import "NIMKitTitleView.h"
#import "NIMLoadProgressView.h"
#import "NIMMemberGroupView.h"
#import "NIMPageView.h"
#import "NIMContactDataCell.h"
#import "NIMContactDefines.h"
#import "NIMGroupedData.h"
#import "NIMGroupedUsrInfo.h"
#import "NIMContactDataItem.h"
#import "NIMContactPickedView.h"
#import "NIMContactSelectConfig.h"
#import "NIMContactSelectTabView.h"
#import "NIMContactSelectViewController.h"
#import "NIMGrowingInternalTextView.h"
#import "NIMGrowingTextView.h"
#import "NIMInputAtCache.h"
#import "NIMInputAudioRecordIndicatorView.h"
#import "NIMInputBarItemType.h"
#import "NIMInputEmoticonButton.h"
#import "NIMInputEmoticonContainerView.h"
#import "NIMInputEmoticonDefine.h"
#import "NIMInputEmoticonManager.h"
#import "NIMInputEmoticonParser.h"
#import "NIMInputEmoticonTabView.h"
#import "NIMInputMoreContainerView.h"
#import "NIMInputToolBar.h"
#import "NIMInputView.h"
#import "NIMKitEvent.h"
#import "NIMKitInfo.h"
#import "NIMKitInfoFetchOption.h"
#import "NIMMediaItem.h"
#import "NIMMessageModel.h"
#import "NIMTimestampModel.h"
#import "NIMAudioContentConfig.h"
#import "NIMBaseSessionContentConfig.h"
#import "NIMFileContentConfig.h"
#import "NIMImageContentConfig.h"
#import "NIMLocationContentConfig.h"
#import "NIMNotificationContentConfig.h"
#import "NIMRobotContentConfig.h"
#import "NIMTextContentConfig.h"
#import "NIMTipContentConfig.h"
#import "NIMUnsupportContentConfig.h"
#import "NIMVideoContentConfig.h"
#import "NIMCellLayoutConfig.h"
#import "NIMKitLocationPoint.h"
#import "NIMKitMessageAtModel.h"
#import "NIMMessageCellFactory.h"
#import "NIMMessageMaker.h"
#import "NIMKitAudioCenter.h"
#import "NIMSessionConfigurateProtocol.h"
#import "NIMSessionConfigurator.h"
#import "NIMSessionDataSourceImpl.h"
#import "NIMSessionInteractorImpl.h"
#import "NIMSessionLayoutImpl.h"
#import "NIMSessionMsgDatasource.h"
#import "NIMSessionPrivateProtocol.h"
#import "NIMSessionTableAdapter.h"
#import "NIMLoadMoreView.h"
#import "NIMMessageCell.h"
#import "NIMSessionTimestampCell.h"
#import "NIMSessionAudioContentView.h"
#import "NIMSessionFileTransContentView.h"
#import "NIMSessionImageContentView.h"
#import "NIMSessionLocationContentView.h"
#import "NIMSessionMessageContentView.h"
#import "NIMSessionNetChatNotifyContentView.h"
#import "NIMSessionNotificationContentView.h"
#import "NIMSessionRobotContentView.h"
#import "NIMSessionTextContentView.h"
#import "NIMSessionUnknowContentView.h"
#import "NIMSessionVideoContentView.h"
#import "NIMLocationViewController.h"
#import "NIMSessionViewController.h"
#import "NIMSessionListViewController.h"
#import "NIMSessionListCell.h"
#import "NIMCardDataSourceProtocol.h"
#import "NIMCardMemberItem.h"
#import "NIMTeamCardOperationItem.h"
#import "NIMTeamCardRowItem.h"
#import "NIMTeamInfoData.h"
#import "NIMUsrInfoData.h"
#import "NIMAdvancedTeamCardViewController.h"
#import "NIMCreateTeamAnnouncement.h"
#import "NIMNormalTeamCardViewController.h"
#import "NIMTeamAnnouncementListViewController.h"
#import "NIMTeamMemberCardViewController.h"
#import "NIMTeamMemberListViewController.h"
#import "NIMTeamNotifyUpdateViewController.h"
#import "NIMAdvancedTeamMemberCell.h"
#import "NIMTeamAnnouncementListCell.h"
#import "NIMTeamCardHeaderCell.h"
#import "NIMTeamMemberCardHeaderCell.h"
#import "NIMTeamSwitchTableViewCell.h"
#import "NIMTimePickerView.h"
#import "NIMKitAuthorizationTool.h"
#import "NIMKitDevice.h"
#import "NIMKitFileLocationHelper.h"
#import "NIMKitResourceResizer.h"
#import "NIMKitTimerHolder.h"
#import "NIMKitUtil.h"
#import "NIMKitRobotDefaultTemplateParser.h"
#import "NIMKitRobotTemplate.h"
#import "NIMKitRobotTemplateLayout.h"
#import "NIMKitRobotTemplateParserProtocol.h"
#import "NIMPinyinConverter.h"
#import "NIMSpellingCenter.h"

FOUNDATION_EXPORT double GGJ_NIMKitVersionNumber;
FOUNDATION_EXPORT const unsigned char GGJ_NIMKitVersionString[];

