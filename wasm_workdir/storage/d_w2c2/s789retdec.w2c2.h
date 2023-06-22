#ifndef s789retdec_H
#define s789retdec_H

#include "w2c2_base.h"

typedef struct s789retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s789retdecInstance;

void f0(s789retdecInstance*);

void f1(s789retdecInstance*);

U32 f2(s789retdecInstance*);

void f3(s789retdecInstance*,U32);

void f4(s789retdecInstance*,U32);

void s789retdec____wasm_call_ctors(s789retdecInstance*i);

void s789retdec____wasm_apply_data_relocs(s789retdecInstance*i);

U32 s789retdec_func_1(s789retdecInstance*i);

void s789retdec_call_cb(s789retdecInstance*i,U32 l0);

void s789retdecInstantiate(s789retdecInstance* instance, void* resolve(const char* module, const char* name));

void s789retdecFreeInstance(s789retdecInstance* instance);

#endif /* s789retdec_H */

