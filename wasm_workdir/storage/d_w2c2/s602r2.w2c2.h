#ifndef s602r2_H
#define s602r2_H

#include "w2c2_base.h"

typedef struct s602r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s602r2Instance;

void f0(s602r2Instance*);

void f1(s602r2Instance*);

U32 f2(s602r2Instance*);

void f3(s602r2Instance*,U32);

U32 f4(s602r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s602r2Instance*,U32,U32,U32,U32,U32);

void f6(s602r2Instance*,U32);

void f7(s602r2Instance*,U32,U32,U32);

void f8(s602r2Instance*,U32,U32,U32);

void s602r2____wasm_call_ctors(s602r2Instance*i);

void s602r2____wasm_apply_data_relocs(s602r2Instance*i);

U32 s602r2_func_1(s602r2Instance*i);

void s602r2_call_cb(s602r2Instance*i,U32 l0);

void s602r2Instantiate(s602r2Instance* instance, void* resolve(const char* module, const char* name));

void s602r2FreeInstance(s602r2Instance* instance);

#endif /* s602r2_H */

