#ifndef s687retdec_H
#define s687retdec_H

#include "w2c2_base.h"

typedef struct s687retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s687retdecInstance;

void f0(s687retdecInstance*);

void f1(s687retdecInstance*);

U32 f2(s687retdecInstance*);

void f3(s687retdecInstance*,U32);

U32 f4(s687retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s687retdecInstance*,U32,U32,U32,U32,U32);

void f6(s687retdecInstance*,U32);

void f7(s687retdecInstance*,U32,U32,U32);

void f8(s687retdecInstance*,U32,U32,U32);

void s687retdec____wasm_call_ctors(s687retdecInstance*i);

void s687retdec____wasm_apply_data_relocs(s687retdecInstance*i);

U32 s687retdec_func_1(s687retdecInstance*i);

void s687retdec_call_cb(s687retdecInstance*i,U32 l0);

void s687retdecInstantiate(s687retdecInstance* instance, void* resolve(const char* module, const char* name));

void s687retdecFreeInstance(s687retdecInstance* instance);

#endif /* s687retdec_H */

