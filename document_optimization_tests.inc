<?php
/**
 * Contains AB Tests for the Document Optimization Team
 * prefix: doc_opt_
 */

global $standard_conversions;
global $unlock_conversions;
global $standard_userid_conversions;

$ab_tests['doc_exp_graphql'] = [
    'description' => 'Test to use graphql',
    'variations' => [
        'original' => 0,
        'graphql' => 1,
    ],
    'initial_percentages' => [
        'original' => 99,
        'graphql' => 1,
    ],
    'conversions' => array_merge($standard_userid_conversions, $unlock_conversions),
    'default_identifier' => 'get_user_id',
];

$ab_tests['doc_exp_unlocked_document_question_chat'] = [
    'description' => 'Test to show unlocked document question on docs with questions',
    'variations' => [
        'original' => 0,
        'collapsed' => 1,
    ],
    'initial_percentages' => [
        'original' => 50,
        'collapsed' => 50,
    ],
    'conversions' => array_merge($standard_userid_conversions, $unlock_conversions),
    'default_identifier' => 'get_user_id',
];

$ab_tests['doc_exp_unlocked_non_ppo_doc_chat'] = [
    'description' => 'Test to show chat on Non PPO docs',
    'variations' => [
        'original' => 0,
        'chat' => 1,
    ],
    'conversions' => array_merge($standard_userid_conversions, $unlock_conversions),
    'default_identifier' => 'get_user_id',
];

$ab_tests['doc_exp_unlocked_document_uq_copy_phase_2'] = [
    'description' => 'Copy changes for UQ entrypoint phase 2',
    'variations' => [
        'original' => 0,
        'chat' => 1,
    ],
    'conversions' => array_merge($standard_userid_conversions, $unlock_conversions),
    'default_identifier' => 'get_user_id',
];

$ab_tests['doc_exp_unlocked_document_mobile_question_chat'] = [
    'description' => 'Unlocked doc mobile question chat',
    'variations' => [
        'original' => 0,
        'chat' => 1,
    ],
    'conversions' => array_merge($standard_userid_conversions, $unlock_conversions),
    'default_identifier' => 'get_user_id',
];

$ab_tests['doc_exp_unlocked_document_mobile_paper_chat'] = [
    'description' => 'Unlocked doc mobile paper chat',
    'variations' => [
        'original' => 0,
        'chat' => 1,
    ],
    'conversions' => array_merge($standard_userid_conversions, $unlock_conversions),
    'default_identifier' => 'get_user_id',
];
