#ifndef s960r2_H
#define s960r2_H

#include "w2c2_base.h"

typedef struct s960r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s960r2Instance;

void f0(s960r2Instance*);

void f1(s960r2Instance*);

U32 f2(s960r2Instance*);

void f3(s960r2Instance*,U32);

U32 f4(s960r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s960r2Instance*,U32,U32,U32,U32,U32);

void f6(s960r2Instance*,U32);

void f7(s960r2Instance*,U32,U32,U32);

void f8(s960r2Instance*,U32,U32,U32);

void s960r2____wasm_call_ctors(s960r2Instance*i);

void s960r2____wasm_apply_data_relocs(s960r2Instance*i);

U32 s960r2_func_1(s960r2Instance*i);

void s960r2_call_cb(s960r2Instance*i,U32 l0);

void s960r2Instantiate(s960r2Instance* instance, void* resolve(const char* module, const char* name));

void s960r2FreeInstance(s960r2Instance* instance);

#endif /* s960r2_H */

