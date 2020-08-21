#pragma once

#include <unordered_map>
#include <string>

#include "./constants.h"

const std::unordered_map<PermissionEnum, std::string> PermissionMap =
    {{PermissionEnum::OutputLog, "输出日志"},
     {PermissionEnum::SendFriendMessage, "发送好友消息"},
     {PermissionEnum::SendGroupMessage, "发送群消息"},
     {PermissionEnum::SendGroupTemporaryMessage, "发送群临时消息"},
     {PermissionEnum::AddFriend, "添加好友"},
     {PermissionEnum::AddGroup, "添加群"},
     {PermissionEnum::RemoveFriend, "删除好友"},
     {PermissionEnum::SetBlockFriend, "置屏蔽好友"},
     {PermissionEnum::SetSpecialFriend, "置特别关心好友"},
     {PermissionEnum::SendFriendJSONMessage, "发送好友json消息"},
     {PermissionEnum::SendGroupJSONMessage, "发送群json消息"},
     {PermissionEnum::UploadFriendPicture, "上传好友图片"},
     {PermissionEnum::UploadGroupPicture, "上传群图片"},
     {PermissionEnum::UploadFriendAudio, "上传好友语音"},
     {PermissionEnum::UploadGroupAudio, "上传群语音"},
     {PermissionEnum::UploadAvatar, "上传头像"},
     {PermissionEnum::SetGroupMemberNickname, "设置群名片"},
     {PermissionEnum::GetNameFromCache, "取昵称_从缓存"},
     {PermissionEnum::GetNameForce, "强制取昵称"},
     {PermissionEnum::GetSKey, "获取skey"},
     {PermissionEnum::GetPSKey, "获取pskey"},
     {PermissionEnum::GetClientKey, "获取clientkey"},
     {PermissionEnum::GetThisQQ, "取框架QQ"},
     {PermissionEnum::GetFriendList, "取好友列表"},
     {PermissionEnum::GetGroupList, "取群列表"},
     {PermissionEnum::GetGroupMemberList, "取群成员列表"},
     {PermissionEnum::SetAdministrator, "设置管理员"},
     {PermissionEnum::GetAdministratorList, "取管理层列表"},
     {PermissionEnum::GetGroupMemberNickname, "取群名片"},
     {PermissionEnum::GetSignature, "取个性签名"},
     {PermissionEnum::SetName, "修改昵称"},
     {PermissionEnum::SetSignature, "修改个性签名"},
     {PermissionEnum::KickGroupMember, "删除群成员"},
     {PermissionEnum::BanGroupMember, "禁言群成员"},
     {PermissionEnum::QuitGroup, "退群"},
     {PermissionEnum::DissolveGroup, "解散群"},
     {PermissionEnum::UploadGroupAvatar, "上传群头像"},
     {PermissionEnum::BanAll, "全员禁言"},
     {PermissionEnum::Group_Create, "群权限_发起新的群聊"},
     {PermissionEnum::Group_CreateTemporary, "群权限_发起临时会话"},
     {PermissionEnum::Group_UploadFile, "群权限_上传文件"},
     {PermissionEnum::Group_UploadPicture, "群权限_上传相册"},
     {PermissionEnum::Group_InviteFriend, "群权限_邀请好友加群"},
     {PermissionEnum::Group_Anonymous, "群权限_匿名聊天"},
     {PermissionEnum::Group_ChatFrankly, "群权限_坦白说"},
     {PermissionEnum::Group_NewMemberReadChatHistory, "群权限_新成员查看历史消息"},
     {PermissionEnum::Group_SetInviteMethod, "群权限_邀请方式设置"},
     {PermissionEnum::Undo_Group, "撤回消息_群聊"},
     {PermissionEnum::Undo_Private, "撤回消息_私聊本身"},
     {PermissionEnum::SetLocationShare, "设置位置共享"},
     {PermissionEnum::ReportCurrentLocation, "上报当前位置"},
     {PermissionEnum::IsShutUp, "是否被禁言"},
     {PermissionEnum::ProcessFriendVerification, "处理好友验证事件"},
     {PermissionEnum::ProcessGroupVerification, "处理群验证事件"},
     {PermissionEnum::ReadForwardedChatHistory, "查看转发聊天记录内容"},
     {PermissionEnum::UploadGroupFile, "上传群文件"},
     {PermissionEnum::CreateGroupFolder, "创建群文件夹"},
     {PermissionEnum::SetStatus, "设置在线状态"},
     {PermissionEnum::QQLike, "QQ点赞"},
     {PermissionEnum::GetImageDownloadLink, "取图片下载地址"},
     {PermissionEnum::QueryFriendInformation, "查询好友信息"},
     {PermissionEnum::QueryGroupInformation, "查询群信息"},
     {PermissionEnum::Reboot, "框架重启"},
     {PermissionEnum::GroupFileForwardToGroup, "群文件转发至群"},
     {PermissionEnum::GroupFileForwardToFriend, "群文件转发至好友"},
     {PermissionEnum::FriendFileForwardToFriend, "好友文件转发至好友"},
     {PermissionEnum::SetGroupMessageReceive, "置群消息接收"},
     {PermissionEnum::GetGroupNameFromCache, "取群名称_从缓存"},
     {PermissionEnum::SendFreeGift, "发送免费礼物"},
     {PermissionEnum::GetFriendStatus, "取好友在线状态"},
     {PermissionEnum::GetQQWalletPersonalInformation, "取QQ钱包个人信息"},
     {PermissionEnum::GetOrderDetail, "获取订单详情"},
     {PermissionEnum::SubmitPaymentCaptcha, "提交支付验证码"},
     {PermissionEnum::ShareMusic, "分享音乐"},
     {PermissionEnum::ModifyGroupMessageContent, "更改群聊消息内容"},
     {PermissionEnum::ModifyPrivateMessageContent, "更改私聊消息内容"},
     {PermissionEnum::GroupPasswordRedEnvelope, "群聊口令红包"},
     {PermissionEnum::GroupRandomRedEnvelope, "群聊拼手气红包"},
     {PermissionEnum::GroupNormalRedEnvelope, "群聊普通红包"},
     {PermissionEnum::GroupDrawRedEnvelope, "群聊画图红包"},
     {PermissionEnum::GroupAudioRedEnvelope, "群聊语音红包"},
     {PermissionEnum::GroupFollowRedEnvelope, "群聊接龙红包"},
     {PermissionEnum::GroupExclusiveRedEnvelope, "群聊专属红包"},
     {PermissionEnum::FriendPasswordRedEnvelope, "好友口令红包"},
     {PermissionEnum::FriendNormalRedEnvelope, "好友普通红包"},
     {PermissionEnum::FriendDrawRedEnvelope, "好友画图红包"},
     {PermissionEnum::FriendAudioRedEnvelope, "好友语音红包"},
     {PermissionEnum::FriendFollowRedEnvelope, "好友接龙红包"}};
