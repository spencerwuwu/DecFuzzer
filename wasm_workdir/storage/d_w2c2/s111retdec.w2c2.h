#ifndef s111retdec_H
#define s111retdec_H

#include "w2c2_base.h"

typedef struct s111retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s111retdecInstance;

void f0(s111retdecInstance*);

void f1(s111retdecInstance*);

U32 f2(s111retdecInstance*);

void f3(s111retdecInstance*,U32);

U32 f4(s111retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s111retdecInstance*,U32,U32,U32,U32,U32);

void f6(s111retdecInstance*,U32);

void f7(s111retdecInstance*,U32,U32,U32);

void f8(s111retdecInstance*,U32,U32,U32);

void s111retdec____wasm_call_ctors(s111retdecInstance*i);

void s111retdec____wasm_apply_data_relocs(s111retdecInstance*i);

U32 s111retdec_func_1(s111retdecInstance*i);

void s111retdec_call_cb(s111retdecInstance*i,U32 l0);

void s111retdecInstantiate(s111retdecInstance* instance, void* resolve(const char* module, const char* name));

void s111retdecFreeInstance(s111retdecInstance* instance);

#endif /* s111retdec_H */

